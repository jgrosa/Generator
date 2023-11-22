//____________________________________________________________________________
/*!

\class    genie::SuSAv2InelInteractionListGenerator

\brief    Creates a list of all the interactions that can be generated by the
          SuSAv2InelGenerator class.
          This is a concrete implementation of the InteractionListGeneratorI
          interface.

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  21 November 2023

\cpright  Copyright (c) 2003-2023, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
*/
//____________________________________________________________________________

#ifndef _SUSAV2INEL_INTERACTION_LIST_GENERATOR_H_
#define _SUSAV2INEL_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class SuSAv2InelInteractionListGenerator : public InteractionListGeneratorI {

public:

  SuSAv2InelInteractionListGenerator();
  SuSAv2InelInteractionListGenerator(string config);
 ~SuSAv2InelInteractionListGenerator();

  // Implement the InteractionListGeneratorI interface
  InteractionList* CreateInteractionList( const InitialState& init ) const;

  // Overload the Algorithm::Configure() methods to load private data members
  // from configuration options
  void Configure( const Registry& config );
  void Configure( std::string config );

private:

  void LoadConfigData();

  bool fIsCC;
  bool fIsNC;
  bool fIsEM;

};

} // genie namespace
#endif // _SUSAV2INEL_INTERACTION_LIST_GENERATOR_H_
