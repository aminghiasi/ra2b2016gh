/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

#include "RooPosDefCorrGauss.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

ClassImp(RooPosDefCorrGauss) 

 RooPosDefCorrGauss::RooPosDefCorrGauss(const char *name, const char *title, 
                        RooAbsReal& _mean,
                        RooAbsReal& _sigma,
                        RooAbsReal& _base_par,
                        Bool_t _changeSign) :
   RooAbsReal(name,title), 
   mean("mean","mean",this,_mean),
   sigma("sigma","sigma",this,_sigma),
   base_par("base_par","base_par",this,_base_par),
   changeSign(_changeSign)
 { 
 } 


 RooPosDefCorrGauss::RooPosDefCorrGauss(const RooPosDefCorrGauss& other, const char* name) :  
   RooAbsReal(other,name), 
   mean("mean",this,other.mean),
   sigma("sigma",this,other.sigma),
   base_par("base_par",this,other.base_par),
   changeSign(other.changeSign)
 { 
 } 



 Double_t RooPosDefCorrGauss::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   if ( !changeSign ) {
      if ( mean+sigma*base_par >= 0 ) {
         return mean+sigma*base_par ;
      } else {
         return 0. ;
      }
   } else {
      if ( mean-sigma*base_par >= 0 ) {
         return mean-sigma*base_par ;
      } else {
         return 0. ;
      }
   }
 } 



