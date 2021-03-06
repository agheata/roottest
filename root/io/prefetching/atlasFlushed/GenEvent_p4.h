//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef GenEvent_p4_h
#define GenEvent_p4_h
class GenEvent_p4;

#include "Riostream.h"
#include <vector>

class GenEvent_p4 {

public:
// Nested classes declaration.

public:
// Data Members.
   int         m_signalProcessId;    //
   int         m_eventNbr;           //
   double      m_eventScale;         //
   double      m_alphaQCD;           //
   double      m_alphaQED;           //
   int         m_signalProcessVtx;    //
   vector<double> m_weights;             //
   vector<double> m_pdfinfo;             //
   vector<long>   m_randomStates;        //
   unsigned int   m_verticesBegin;       //
   unsigned int   m_verticesEnd;         //
   unsigned int   m_particlesBegin;      //
   unsigned int   m_particlesEnd;        //

   GenEvent_p4();
   GenEvent_p4(const GenEvent_p4 & );
   virtual ~GenEvent_p4();

};
#endif
