//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigInDetTrackTruthMap_tlp1_h
#define TrigInDetTrackTruthMap_tlp1_h
class TrigInDetTrackTruthMap_tlp1;

#include "Riostream.h"
#include <vector>
#include "TrigInDetTrackTruthMap_p1.h"
#include "TrigInDetTrackTruth_p1.h"
#include "TrigIDHitStats_p1.h"
#include "HepMcParticleLink_p1.h"
#include "TrigInDetTrackCollection_p1.h"
#include "TrigInDetTrack_p1.h"
#include "TrigInDetTrackFitPar_p1.h"

class TrigInDetTrackTruthMap_tlp1 {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<TrigInDetTrackTruthMap_p1> m_trigInDetTrackTruthMap_p1;    //(TrigInDetTrackTruthMap_p1)
   vector<TrigInDetTrackTruth_p1>    m_trigInDetTrackTruth_p1;       //(TrigInDetTrackTruth_p1)
   vector<TrigIDHitStats_p1>         m_trigIDHitStats_p1;            //(TrigIDHitStats_p1)
   vector<HepMcParticleLink_p1>      m_hepMcParticleLink_p1;         //(HepMcParticleLink_p1)
   vector<TrigInDetTrackCollection_p1> m_trigInDetTrackCollection_p1;    //(TrigInDetTrackCollection_p1)
   vector<TrigInDetTrack_p1>           m_trigInDetTrack_p1;              //(TrigInDetTrack_p1)
   vector<TrigInDetTrackFitPar_p1>     m_trigInDetTrackFitPar_p1;        //(TrigInDetTrackFitPar_p1)

   TrigInDetTrackTruthMap_tlp1();
   TrigInDetTrackTruthMap_tlp1(const TrigInDetTrackTruthMap_tlp1 & );
   virtual ~TrigInDetTrackTruthMap_tlp1();

};
#endif
