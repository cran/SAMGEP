// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// dmvnorm_arma
arma::vec dmvnorm_arma(arma::mat const& x, arma::vec const& mean, arma::mat const& sigma, bool const logd);
RcppExport SEXP _SAMGEP_dmvnorm_arma(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm_arma(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// dmvnrm_arma_old
arma::vec dmvnrm_arma_old(arma::mat x, arma::rowvec mean, arma::mat sigma, bool logd);
RcppExport SEXP _SAMGEP_dmvnrm_arma_old(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma_old(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// dmvnrm_arma
arma::vec dmvnrm_arma(arma::mat const& x, arma::rowvec const& mean, arma::mat const& sigma, bool const logd);
RcppExport SEXP _SAMGEP_dmvnrm_arma(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec const& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// dmvnrm_arma_fast
arma::vec dmvnrm_arma_fast(arma::mat const& x, arma::rowvec const& mean, arma::mat const& sigma, bool const logd);
RcppExport SEXP _SAMGEP_dmvnrm_arma_fast(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec const& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma_fast(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SAMGEP_dmvnorm_arma", (DL_FUNC) &_SAMGEP_dmvnorm_arma, 4},
    {"_SAMGEP_dmvnrm_arma_old", (DL_FUNC) &_SAMGEP_dmvnrm_arma_old, 4},
    {"_SAMGEP_dmvnrm_arma", (DL_FUNC) &_SAMGEP_dmvnrm_arma, 4},
    {"_SAMGEP_dmvnrm_arma_fast", (DL_FUNC) &_SAMGEP_dmvnrm_arma_fast, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_SAMGEP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}