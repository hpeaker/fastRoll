// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/fastRoll.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// c2_cpp
Rcpp::NumericVector c2_cpp(Rcpp::NumericVector x, Rcpp::NumericVector y);
RcppExport SEXP _fastRoll_c2_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(c2_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _fastRoll_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rollcor_cpp
NumericVector rollcor_cpp(NumericVector x, NumericVector y, int k);
RcppExport SEXP _fastRoll_rollcor_cpp(SEXP xSEXP, SEXP ySEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollcor_cpp(x, y, k));
    return rcpp_result_gen;
END_RCPP
}
// rollcov_cpp
Rcpp::NumericVector rollcov_cpp(Rcpp::NumericVector x, Rcpp::NumericVector y, int k);
RcppExport SEXP _fastRoll_rollcov_cpp(SEXP xSEXP, SEXP ySEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollcov_cpp(x, y, k));
    return rcpp_result_gen;
END_RCPP
}
// rollmax_cpp
Rcpp::NumericVector rollmax_cpp(Rcpp::NumericVector x, int k);
RcppExport SEXP _fastRoll_rollmax_cpp(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollmax_cpp(x, k));
    return rcpp_result_gen;
END_RCPP
}
// rollmean_cpp
NumericVector rollmean_cpp(NumericVector x, int k);
static SEXP _fastRoll_rollmean_cpp_try(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollmean_cpp(x, k));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastRoll_rollmean_cpp(SEXP xSEXP, SEXP kSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastRoll_rollmean_cpp_try(xSEXP, kSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rollsum_cpp
Rcpp::NumericVector rollsum_cpp(Rcpp::NumericVector x, int k);
static SEXP _fastRoll_rollsum_cpp_try(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollsum_cpp(x, k));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastRoll_rollsum_cpp(SEXP xSEXP, SEXP kSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastRoll_rollsum_cpp_try(xSEXP, kSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rollmin_cpp
Rcpp::NumericVector rollmin_cpp(Rcpp::NumericVector x, int k);
RcppExport SEXP _fastRoll_rollmin_cpp(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollmin_cpp(x, k));
    return rcpp_result_gen;
END_RCPP
}
// rollsum3_cpp
Rcpp::NumericVector rollsum3_cpp(Rcpp::NumericVector x, int k);
RcppExport SEXP _fastRoll_rollsum3_cpp(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollsum3_cpp(x, k));
    return rcpp_result_gen;
END_RCPP
}
// rollmean2_cpp
Rcpp::NumericVector rollmean2_cpp(Rcpp::NumericVector x, int k);
RcppExport SEXP _fastRoll_rollmean2_cpp(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollmean2_cpp(x, k));
    return rcpp_result_gen;
END_RCPP
}
// rollsum2_cpp
Rcpp::NumericVector rollsum2_cpp(Rcpp::NumericVector x, int k);
RcppExport SEXP _fastRoll_rollsum2_cpp(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollsum2_cpp(x, k));
    return rcpp_result_gen;
END_RCPP
}
// rollvar_cpp
NumericVector rollvar_cpp(NumericVector x, int k);
RcppExport SEXP _fastRoll_rollvar_cpp(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollvar_cpp(x, k));
    return rcpp_result_gen;
END_RCPP
}
// rollsd_cpp
NumericVector rollsd_cpp(NumericVector x, int k);
RcppExport SEXP _fastRoll_rollsd_cpp(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rollsd_cpp(x, k));
    return rcpp_result_gen;
END_RCPP
}
// value_pad_cpp
Rcpp::NumericVector value_pad_cpp(Rcpp::NumericVector x, int front, int back, double value);
RcppExport SEXP _fastRoll_value_pad_cpp(SEXP xSEXP, SEXP frontSEXP, SEXP backSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type front(frontSEXP);
    Rcpp::traits::input_parameter< int >::type back(backSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(value_pad_cpp(x, front, back, value));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _fastRoll_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("NumericVector(*rollmean_cpp)(NumericVector,int)");
        signatures.insert("Rcpp::NumericVector(*rollsum_cpp)(Rcpp::NumericVector,int)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _fastRoll_RcppExport_registerCCallable() { 
    R_RegisterCCallable("fastRoll", "_fastRoll_rollmean_cpp", (DL_FUNC)_fastRoll_rollmean_cpp_try);
    R_RegisterCCallable("fastRoll", "_fastRoll_rollsum_cpp", (DL_FUNC)_fastRoll_rollsum_cpp_try);
    R_RegisterCCallable("fastRoll", "_fastRoll_RcppExport_validate", (DL_FUNC)_fastRoll_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastRoll_c2_cpp", (DL_FUNC) &_fastRoll_c2_cpp, 2},
    {"_fastRoll_rcpp_hello_world", (DL_FUNC) &_fastRoll_rcpp_hello_world, 0},
    {"_fastRoll_rollcor_cpp", (DL_FUNC) &_fastRoll_rollcor_cpp, 3},
    {"_fastRoll_rollcov_cpp", (DL_FUNC) &_fastRoll_rollcov_cpp, 3},
    {"_fastRoll_rollmax_cpp", (DL_FUNC) &_fastRoll_rollmax_cpp, 2},
    {"_fastRoll_rollmean_cpp", (DL_FUNC) &_fastRoll_rollmean_cpp, 2},
    {"_fastRoll_rollsum_cpp", (DL_FUNC) &_fastRoll_rollsum_cpp, 2},
    {"_fastRoll_rollmin_cpp", (DL_FUNC) &_fastRoll_rollmin_cpp, 2},
    {"_fastRoll_rollsum3_cpp", (DL_FUNC) &_fastRoll_rollsum3_cpp, 2},
    {"_fastRoll_rollmean2_cpp", (DL_FUNC) &_fastRoll_rollmean2_cpp, 2},
    {"_fastRoll_rollsum2_cpp", (DL_FUNC) &_fastRoll_rollsum2_cpp, 2},
    {"_fastRoll_rollvar_cpp", (DL_FUNC) &_fastRoll_rollvar_cpp, 2},
    {"_fastRoll_rollsd_cpp", (DL_FUNC) &_fastRoll_rollsd_cpp, 2},
    {"_fastRoll_value_pad_cpp", (DL_FUNC) &_fastRoll_value_pad_cpp, 4},
    {"_fastRoll_RcppExport_registerCCallable", (DL_FUNC) &_fastRoll_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastRoll(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
