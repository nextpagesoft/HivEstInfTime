// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Lspline
Rcpp::NumericVector Lspline(const Rcpp::NumericVector& x, const Rcpp::NumericVector& knots);
RcppExport SEXP _HivEstInfTime_Lspline(SEXP xSEXP, SEXP knotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type knots(knotsSEXP);
    rcpp_result_gen = Rcpp::wrap(Lspline(x, knots));
    return rcpp_result_gen;
END_RCPP
}
// GetLogMVNPdf
double GetLogMVNPdf(const arma::dvec& x, const arma::dvec& mu, const arma::dmat& sigma);
RcppExport SEXP _HivEstInfTime_GetLogMVNPdf(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::dvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::dvec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(GetLogMVNPdf(x, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// PostW
double PostW(const double& w, const arma::dvec& y, const arma::dmat& xAIDS, const double& maxDTime, const arma::dmat& betaAIDS, const double& kappa, const arma::dmat& bFE, const arma::dmat& varCovRE, const Rcpp::List& baseCD4DM, const Rcpp::DataFrame& fxCD4Data, const Rcpp::List& baseVLDM, const Rcpp::DataFrame& fxVLData, const Rcpp::List& baseRandEffDM, const Rcpp::DataFrame& fzData, const arma::dmat& err);
RcppExport SEXP _HivEstInfTime_PostW(SEXP wSEXP, SEXP ySEXP, SEXP xAIDSSEXP, SEXP maxDTimeSEXP, SEXP betaAIDSSEXP, SEXP kappaSEXP, SEXP bFESEXP, SEXP varCovRESEXP, SEXP baseCD4DMSEXP, SEXP fxCD4DataSEXP, SEXP baseVLDMSEXP, SEXP fxVLDataSEXP, SEXP baseRandEffDMSEXP, SEXP fzDataSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::dvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type xAIDS(xAIDSSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxDTime(maxDTimeSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type betaAIDS(betaAIDSSEXP);
    Rcpp::traits::input_parameter< const double& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type bFE(bFESEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type varCovRE(varCovRESEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type baseCD4DM(baseCD4DMSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fxCD4Data(fxCD4DataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type baseVLDM(baseVLDMSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fxVLData(fxVLDataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type baseRandEffDM(baseRandEffDMSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fzData(fzDataSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(PostW(w, y, xAIDS, maxDTime, betaAIDS, kappa, bFE, varCovRE, baseCD4DM, fxCD4Data, baseVLDM, fxVLData, baseRandEffDM, fzData, err));
    return rcpp_result_gen;
END_RCPP
}
// VPostW
Rcpp::NumericVector VPostW(const arma::dvec& w, const arma::dvec& y, const arma::dmat& xAIDS, const double& maxDTime, const arma::dmat& betaAIDS, const double& kappa, const arma::dmat& bFE, const arma::dmat& varCovRE, const Rcpp::List& baseCD4DM, const Rcpp::DataFrame& fxCD4Data, const Rcpp::List& baseVLDM, const Rcpp::DataFrame& fxVLData, const Rcpp::List& baseRandEffDM, const Rcpp::DataFrame& fzData, const arma::dmat& err);
RcppExport SEXP _HivEstInfTime_VPostW(SEXP wSEXP, SEXP ySEXP, SEXP xAIDSSEXP, SEXP maxDTimeSEXP, SEXP betaAIDSSEXP, SEXP kappaSEXP, SEXP bFESEXP, SEXP varCovRESEXP, SEXP baseCD4DMSEXP, SEXP fxCD4DataSEXP, SEXP baseVLDMSEXP, SEXP fxVLDataSEXP, SEXP baseRandEffDMSEXP, SEXP fzDataSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::dvec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::dvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type xAIDS(xAIDSSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxDTime(maxDTimeSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type betaAIDS(betaAIDSSEXP);
    Rcpp::traits::input_parameter< const double& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type bFE(bFESEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type varCovRE(varCovRESEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type baseCD4DM(baseCD4DMSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fxCD4Data(fxCD4DataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type baseVLDM(baseVLDMSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fxVLData(fxVLDataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type baseRandEffDM(baseRandEffDMSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fzData(fzDataSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(VPostW(w, y, xAIDS, maxDTime, betaAIDS, kappa, bFE, varCovRE, baseCD4DM, fxCD4Data, baseVLDM, fxVLData, baseRandEffDM, fzData, err));
    return rcpp_result_gen;
END_RCPP
}
// IntegratePostW
Rcpp::List IntegratePostW(const double& lower, const double& upper, const arma::dvec& y, const arma::dmat& xAIDS, const double& maxDTime, const arma::dmat& betaAIDS, const double& kappa, const arma::dmat& bFE, const arma::dmat& varCovRE, const Rcpp::List& baseCD4DM, const Rcpp::DataFrame& fxCD4Data, const Rcpp::List& baseVLDM, const Rcpp::DataFrame& fxVLData, const Rcpp::List& baseRandEffDM, const Rcpp::DataFrame& fzData, const arma::dmat& err);
RcppExport SEXP _HivEstInfTime_IntegratePostW(SEXP lowerSEXP, SEXP upperSEXP, SEXP ySEXP, SEXP xAIDSSEXP, SEXP maxDTimeSEXP, SEXP betaAIDSSEXP, SEXP kappaSEXP, SEXP bFESEXP, SEXP varCovRESEXP, SEXP baseCD4DMSEXP, SEXP fxCD4DataSEXP, SEXP baseVLDMSEXP, SEXP fxVLDataSEXP, SEXP baseRandEffDMSEXP, SEXP fzDataSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const double& >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< const arma::dvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type xAIDS(xAIDSSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxDTime(maxDTimeSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type betaAIDS(betaAIDSSEXP);
    Rcpp::traits::input_parameter< const double& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type bFE(bFESEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type varCovRE(varCovRESEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type baseCD4DM(baseCD4DMSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fxCD4Data(fxCD4DataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type baseVLDM(baseVLDMSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fxVLData(fxVLDataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type baseRandEffDM(baseRandEffDMSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fzData(fzDataSEXP);
    Rcpp::traits::input_parameter< const arma::dmat& >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(IntegratePostW(lower, upper, y, xAIDS, maxDTime, betaAIDS, kappa, bFE, varCovRE, baseCD4DM, fxCD4Data, baseVLDM, fxVLData, baseRandEffDM, fzData, err));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HivEstInfTime_Lspline", (DL_FUNC) &_HivEstInfTime_Lspline, 2},
    {"_HivEstInfTime_GetLogMVNPdf", (DL_FUNC) &_HivEstInfTime_GetLogMVNPdf, 3},
    {"_HivEstInfTime_PostW", (DL_FUNC) &_HivEstInfTime_PostW, 15},
    {"_HivEstInfTime_VPostW", (DL_FUNC) &_HivEstInfTime_VPostW, 15},
    {"_HivEstInfTime_IntegratePostW", (DL_FUNC) &_HivEstInfTime_IntegratePostW, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_HivEstInfTime(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}