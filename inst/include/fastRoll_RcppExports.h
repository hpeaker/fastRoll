// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_fastRoll_RCPPEXPORTS_H_GEN_
#define RCPP_fastRoll_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace fastRoll {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("fastRoll", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("fastRoll", "_fastRoll_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in fastRoll");
            }
        }
    }

    inline NumericVector rollmean_cpp(NumericVector x, int k) {
        typedef SEXP(*Ptr_rollmean_cpp)(SEXP,SEXP);
        static Ptr_rollmean_cpp p_rollmean_cpp = NULL;
        if (p_rollmean_cpp == NULL) {
            validateSignature("NumericVector(*rollmean_cpp)(NumericVector,int)");
            p_rollmean_cpp = (Ptr_rollmean_cpp)R_GetCCallable("fastRoll", "_fastRoll_rollmean_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rollmean_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(k)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline Rcpp::NumericVector rollsum_cpp(Rcpp::NumericVector x, int k) {
        typedef SEXP(*Ptr_rollsum_cpp)(SEXP,SEXP);
        static Ptr_rollsum_cpp p_rollsum_cpp = NULL;
        if (p_rollsum_cpp == NULL) {
            validateSignature("Rcpp::NumericVector(*rollsum_cpp)(Rcpp::NumericVector,int)");
            p_rollsum_cpp = (Ptr_rollsum_cpp)R_GetCCallable("fastRoll", "_fastRoll_rollsum_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rollsum_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(k)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::NumericVector >(rcpp_result_gen);
    }

}

#endif // RCPP_fastRoll_RCPPEXPORTS_H_GEN_