#include <Rcpp.h>

// [[Rcpp::export]]
Rcpp::NumericVector
value_pad_cpp(Rcpp::NumericVector x, int front, int back, double value) {
  for(int i = 0; i < front; i++) {
    x.push_front(value);
  }
  for(int i = 0; i < back; i++) {
    x.push_back(value);
  }
  return x;
}

