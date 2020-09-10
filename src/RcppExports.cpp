// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// DTriangC
Rcpp::NumericVector DTriangC(Rcpp::NumericVector x, double min, double max, double mode, bool log);
RcppExport SEXP _triangulr_DTriangC(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP modeSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< bool >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(DTriangC(x, min, max, mode, log));
    return rcpp_result_gen;
END_RCPP
}
// DTriangC2
Rcpp::NumericVector DTriangC2(Rcpp::NumericVector x, Rcpp::NumericVector min, Rcpp::NumericVector max, Rcpp::NumericVector mode, bool log);
RcppExport SEXP _triangulr_DTriangC2(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP modeSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< bool >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(DTriangC2(x, min, max, mode, log));
    return rcpp_result_gen;
END_RCPP
}
// PTriangC
Rcpp::NumericVector PTriangC(Rcpp::NumericVector x, double min, double max, double mode, bool lower_tail, bool log_p);
RcppExport SEXP _triangulr_PTriangC(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP modeSEXP, SEXP lower_tailSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< bool >::type lower_tail(lower_tailSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(PTriangC(x, min, max, mode, lower_tail, log_p));
    return rcpp_result_gen;
END_RCPP
}
// PTriangC2
Rcpp::NumericVector PTriangC2(Rcpp::NumericVector x, Rcpp::NumericVector min, Rcpp::NumericVector max, Rcpp::NumericVector mode, bool lower_tail, bool log_p);
RcppExport SEXP _triangulr_PTriangC2(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP modeSEXP, SEXP lower_tailSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< bool >::type lower_tail(lower_tailSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(PTriangC2(x, min, max, mode, lower_tail, log_p));
    return rcpp_result_gen;
END_RCPP
}
// QTriangC
Rcpp::NumericVector QTriangC(Rcpp::NumericVector p, double min, double max, double mode, bool lower_tail, bool log_p);
RcppExport SEXP _triangulr_QTriangC(SEXP pSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP modeSEXP, SEXP lower_tailSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< bool >::type lower_tail(lower_tailSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(QTriangC(p, min, max, mode, lower_tail, log_p));
    return rcpp_result_gen;
END_RCPP
}
// QTriangC2
Rcpp::NumericVector QTriangC2(Rcpp::NumericVector p, Rcpp::NumericVector min, Rcpp::NumericVector max, Rcpp::NumericVector mode, bool lower_tail, bool log_p);
RcppExport SEXP _triangulr_QTriangC2(SEXP pSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP modeSEXP, SEXP lower_tailSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< bool >::type lower_tail(lower_tailSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(QTriangC2(p, min, max, mode, lower_tail, log_p));
    return rcpp_result_gen;
END_RCPP
}
// RTriangC
Rcpp::NumericVector RTriangC(int n, double min, double max, double mode);
RcppExport SEXP _triangulr_RTriangC(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(RTriangC(n, min, max, mode));
    return rcpp_result_gen;
END_RCPP
}
// RTriangC2
Rcpp::NumericVector RTriangC2(int n, Rcpp::NumericVector min, Rcpp::NumericVector max, Rcpp::NumericVector mode);
RcppExport SEXP _triangulr_RTriangC2(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(RTriangC2(n, min, max, mode));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_triangulr_DTriangC", (DL_FUNC) &_triangulr_DTriangC, 5},
    {"_triangulr_DTriangC2", (DL_FUNC) &_triangulr_DTriangC2, 5},
    {"_triangulr_PTriangC", (DL_FUNC) &_triangulr_PTriangC, 6},
    {"_triangulr_PTriangC2", (DL_FUNC) &_triangulr_PTriangC2, 6},
    {"_triangulr_QTriangC", (DL_FUNC) &_triangulr_QTriangC, 6},
    {"_triangulr_QTriangC2", (DL_FUNC) &_triangulr_QTriangC2, 6},
    {"_triangulr_RTriangC", (DL_FUNC) &_triangulr_RTriangC, 4},
    {"_triangulr_RTriangC2", (DL_FUNC) &_triangulr_RTriangC2, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_triangulr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
