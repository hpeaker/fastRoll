#include <Rcpp.h>
#include <fastRoll.h>
using namespace Rcpp;
using namespace fastRoll;


// [[Rcpp::export]]
NumericVector
rollvar_cpp(NumericVector x, int k) {
  
  NumericVector Exx = rollmean_cpp(x * x, k);
  NumericVector Ex = rollmean_cpp(x, k);
  
  NumericVector out = Exx - (Ex * Ex);
  
  return(out * k / (k - 1));
}


// [[Rcpp::export]]
NumericVector
rollsd_cpp(NumericVector x, int k) {
    
  NumericVector out = sqrt(rollvar_cpp(x, k));
    
  return out;
}

