// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bq_parse
SEXP bq_parse(std::string meta_s, std::string data_s);
RcppExport SEXP _bigrquery_bq_parse(SEXP meta_sSEXP, SEXP data_sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type meta_s(meta_sSEXP);
    Rcpp::traits::input_parameter< std::string >::type data_s(data_sSEXP);
    rcpp_result_gen = Rcpp::wrap(bq_parse(meta_s, data_s));
    return rcpp_result_gen;
END_RCPP
}
// bq_field_init
SEXP bq_field_init(std::string json, std::string value);
RcppExport SEXP _bigrquery_bq_field_init(SEXP jsonSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type json(jsonSEXP);
    Rcpp::traits::input_parameter< std::string >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(bq_field_init(json, value));
    return rcpp_result_gen;
END_RCPP
}
// bq_tabledata_to_list
Rcpp::List bq_tabledata_to_list(Rcpp::RawVector x);
RcppExport SEXP _bigrquery_bq_tabledata_to_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bq_tabledata_to_list(x));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP null_to_na_(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_bigrquery_bq_parse", (DL_FUNC) &_bigrquery_bq_parse, 2},
    {"_bigrquery_bq_field_init", (DL_FUNC) &_bigrquery_bq_field_init, 2},
    {"_bigrquery_bq_tabledata_to_list", (DL_FUNC) &_bigrquery_bq_tabledata_to_list, 1},
    {"null_to_na_",                     (DL_FUNC) &null_to_na_,                     1},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigrquery(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
