// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_allocation_ratio
double rcpp_allocation_ratio(double biomass, double biomass_min, double biomass_max, double threshold, double slope);
static SEXP _arrR_seagrass_rcpp_allocation_ratio_try(SEXP biomassSEXP, SEXP biomass_minSEXP, SEXP biomass_maxSEXP, SEXP thresholdSEXP, SEXP slopeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type biomass(biomassSEXP);
    Rcpp::traits::input_parameter< double >::type biomass_min(biomass_minSEXP);
    Rcpp::traits::input_parameter< double >::type biomass_max(biomass_maxSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type slope(slopeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_allocation_ratio(biomass, biomass_min, biomass_max, threshold, slope));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_allocation_ratio(SEXP biomassSEXP, SEXP biomass_minSEXP, SEXP biomass_maxSEXP, SEXP thresholdSEXP, SEXP slopeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_allocation_ratio_try(biomassSEXP, biomass_minSEXP, biomass_maxSEXP, thresholdSEXP, slopeSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_convert_nutr
double rcpp_convert_nutr(double x, std::string to);
static SEXP _arrR_seagrass_rcpp_convert_nutr_try(SEXP xSEXP, SEXP toSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type to(toSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_convert_nutr(x, to));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_convert_nutr(SEXP xSEXP, SEXP toSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_convert_nutr_try(xSEXP, toSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_diffuse_values
void rcpp_diffuse_values(Rcpp::NumericMatrix seafloor, Rcpp::IntegerMatrix cell_adj, double nutrients_diffusion, double detritus_diffusion, double detritus_fish_diffusion);
static SEXP _arrR_seagrass_rcpp_diffuse_values_try(SEXP seafloorSEXP, SEXP cell_adjSEXP, SEXP nutrients_diffusionSEXP, SEXP detritus_diffusionSEXP, SEXP detritus_fish_diffusionSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type seafloor(seafloorSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type cell_adj(cell_adjSEXP);
    Rcpp::traits::input_parameter< double >::type nutrients_diffusion(nutrients_diffusionSEXP);
    Rcpp::traits::input_parameter< double >::type detritus_diffusion(detritus_diffusionSEXP);
    Rcpp::traits::input_parameter< double >::type detritus_fish_diffusion(detritus_fish_diffusionSEXP);
    rcpp_diffuse_values(seafloor, cell_adj, nutrients_diffusion, detritus_diffusion, detritus_fish_diffusion);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_diffuse_values(SEXP seafloorSEXP, SEXP cell_adjSEXP, SEXP nutrients_diffusionSEXP, SEXP detritus_diffusionSEXP, SEXP detritus_fish_diffusionSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_diffuse_values_try(seafloorSEXP, cell_adjSEXP, nutrients_diffusionSEXP, detritus_diffusionSEXP, detritus_fish_diffusionSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_get_adjacencies
Rcpp::IntegerMatrix rcpp_get_adjacencies(Rcpp::IntegerVector dimensions, bool torus);
static SEXP _arrR_seagrass_rcpp_get_adjacencies_try(SEXP dimensionsSEXP, SEXP torusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type dimensions(dimensionsSEXP);
    Rcpp::traits::input_parameter< bool >::type torus(torusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_adjacencies(dimensions, torus));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_get_adjacencies(SEXP dimensionsSEXP, SEXP torusSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_get_adjacencies_try(dimensionsSEXP, torusSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_get_reef
Rcpp::NumericMatrix rcpp_get_reef(Rcpp::NumericMatrix seafloor);
static SEXP _arrR_seagrass_rcpp_get_reef_try(SEXP seafloorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type seafloor(seafloorSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_reef(seafloor));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_get_reef(SEXP seafloorSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_get_reef_try(seafloorSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_mineralization
void rcpp_mineralization(Rcpp::NumericMatrix seafloor, double detritus_mineralization, double detritus_fish_decomp);
static SEXP _arrR_seagrass_rcpp_mineralization_try(SEXP seafloorSEXP, SEXP detritus_mineralizationSEXP, SEXP detritus_fish_decompSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type seafloor(seafloorSEXP);
    Rcpp::traits::input_parameter< double >::type detritus_mineralization(detritus_mineralizationSEXP);
    Rcpp::traits::input_parameter< double >::type detritus_fish_decomp(detritus_fish_decompSEXP);
    rcpp_mineralization(seafloor, detritus_mineralization, detritus_fish_decomp);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_mineralization(SEXP seafloorSEXP, SEXP detritus_mineralizationSEXP, SEXP detritus_fish_decompSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_mineralization_try(seafloorSEXP, detritus_mineralizationSEXP, detritus_fish_decompSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_nutr_input
void rcpp_nutr_input(Rcpp::NumericMatrix seafloor, double nutrients_input);
static SEXP _arrR_seagrass_rcpp_nutr_input_try(SEXP seafloorSEXP, SEXP nutrients_inputSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type seafloor(seafloorSEXP);
    Rcpp::traits::input_parameter< double >::type nutrients_input(nutrients_inputSEXP);
    rcpp_nutr_input(seafloor, nutrients_input);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_nutr_input(SEXP seafloorSEXP, SEXP nutrients_inputSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_nutr_input_try(seafloorSEXP, nutrients_inputSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_nutr_output
void rcpp_nutr_output(Rcpp::NumericMatrix seafloor, double nutrients_loss, double detritus_loss);
static SEXP _arrR_seagrass_rcpp_nutr_output_try(SEXP seafloorSEXP, SEXP nutrients_lossSEXP, SEXP detritus_lossSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type seafloor(seafloorSEXP);
    Rcpp::traits::input_parameter< double >::type nutrients_loss(nutrients_lossSEXP);
    Rcpp::traits::input_parameter< double >::type detritus_loss(detritus_lossSEXP);
    rcpp_nutr_output(seafloor, nutrients_loss, detritus_loss);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_nutr_output(SEXP seafloorSEXP, SEXP nutrients_lossSEXP, SEXP detritus_lossSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_nutr_output_try(seafloorSEXP, nutrients_lossSEXP, detritus_lossSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_nutr_uptake
double rcpp_nutr_uptake(double nutrients, double biomass, double v_max, double k_m, double time_frac);
static SEXP _arrR_seagrass_rcpp_nutr_uptake_try(SEXP nutrientsSEXP, SEXP biomassSEXP, SEXP v_maxSEXP, SEXP k_mSEXP, SEXP time_fracSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type nutrients(nutrientsSEXP);
    Rcpp::traits::input_parameter< double >::type biomass(biomassSEXP);
    Rcpp::traits::input_parameter< double >::type v_max(v_maxSEXP);
    Rcpp::traits::input_parameter< double >::type k_m(k_mSEXP);
    Rcpp::traits::input_parameter< double >::type time_frac(time_fracSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_nutr_uptake(nutrients, biomass, v_max, k_m, time_frac));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_nutr_uptake(SEXP nutrientsSEXP, SEXP biomassSEXP, SEXP v_maxSEXP, SEXP k_mSEXP, SEXP time_fracSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_nutr_uptake_try(nutrientsSEXP, biomassSEXP, v_maxSEXP, k_mSEXP, time_fracSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_seagrass_growth
void rcpp_seagrass_growth(Rcpp::NumericMatrix seafloor, double bg_v_max, double bg_k_m, double bg_gamma, double ag_v_max, double ag_k_m, double ag_gamma, double bg_biomass_max, double bg_biomass_min, double ag_biomass_max, double ag_biomass_min, double seagrass_thres, double seagrass_slope, double seagrass_slough, double time_frac);
static SEXP _arrR_seagrass_rcpp_seagrass_growth_try(SEXP seafloorSEXP, SEXP bg_v_maxSEXP, SEXP bg_k_mSEXP, SEXP bg_gammaSEXP, SEXP ag_v_maxSEXP, SEXP ag_k_mSEXP, SEXP ag_gammaSEXP, SEXP bg_biomass_maxSEXP, SEXP bg_biomass_minSEXP, SEXP ag_biomass_maxSEXP, SEXP ag_biomass_minSEXP, SEXP seagrass_thresSEXP, SEXP seagrass_slopeSEXP, SEXP seagrass_sloughSEXP, SEXP time_fracSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type seafloor(seafloorSEXP);
    Rcpp::traits::input_parameter< double >::type bg_v_max(bg_v_maxSEXP);
    Rcpp::traits::input_parameter< double >::type bg_k_m(bg_k_mSEXP);
    Rcpp::traits::input_parameter< double >::type bg_gamma(bg_gammaSEXP);
    Rcpp::traits::input_parameter< double >::type ag_v_max(ag_v_maxSEXP);
    Rcpp::traits::input_parameter< double >::type ag_k_m(ag_k_mSEXP);
    Rcpp::traits::input_parameter< double >::type ag_gamma(ag_gammaSEXP);
    Rcpp::traits::input_parameter< double >::type bg_biomass_max(bg_biomass_maxSEXP);
    Rcpp::traits::input_parameter< double >::type bg_biomass_min(bg_biomass_minSEXP);
    Rcpp::traits::input_parameter< double >::type ag_biomass_max(ag_biomass_maxSEXP);
    Rcpp::traits::input_parameter< double >::type ag_biomass_min(ag_biomass_minSEXP);
    Rcpp::traits::input_parameter< double >::type seagrass_thres(seagrass_thresSEXP);
    Rcpp::traits::input_parameter< double >::type seagrass_slope(seagrass_slopeSEXP);
    Rcpp::traits::input_parameter< double >::type seagrass_slough(seagrass_sloughSEXP);
    Rcpp::traits::input_parameter< double >::type time_frac(time_fracSEXP);
    rcpp_seagrass_growth(seafloor, bg_v_max, bg_k_m, bg_gamma, ag_v_max, ag_k_m, ag_gamma, bg_biomass_max, bg_biomass_min, ag_biomass_max, ag_biomass_min, seagrass_thres, seagrass_slope, seagrass_slough, time_frac);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_seagrass_rcpp_seagrass_growth(SEXP seafloorSEXP, SEXP bg_v_maxSEXP, SEXP bg_k_mSEXP, SEXP bg_gammaSEXP, SEXP ag_v_maxSEXP, SEXP ag_k_mSEXP, SEXP ag_gammaSEXP, SEXP bg_biomass_maxSEXP, SEXP bg_biomass_minSEXP, SEXP ag_biomass_maxSEXP, SEXP ag_biomass_minSEXP, SEXP seagrass_thresSEXP, SEXP seagrass_slopeSEXP, SEXP seagrass_sloughSEXP, SEXP time_fracSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_seagrass_rcpp_seagrass_growth_try(seafloorSEXP, bg_v_maxSEXP, bg_k_mSEXP, bg_gammaSEXP, ag_v_maxSEXP, ag_k_mSEXP, ag_gammaSEXP, bg_biomass_maxSEXP, bg_biomass_minSEXP, ag_biomass_maxSEXP, ag_biomass_minSEXP, seagrass_thresSEXP, seagrass_slopeSEXP, seagrass_sloughSEXP, time_fracSEXP));
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
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _arrR_seagrass_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("double(*rcpp_allocation_ratio)(double,double,double,double,double)");
        signatures.insert("double(*rcpp_convert_nutr)(double,std::string)");
        signatures.insert("void(*rcpp_diffuse_values)(Rcpp::NumericMatrix,Rcpp::IntegerMatrix,double,double,double)");
        signatures.insert("Rcpp::IntegerMatrix(*rcpp_get_adjacencies)(Rcpp::IntegerVector,bool)");
        signatures.insert("Rcpp::NumericMatrix(*rcpp_get_reef)(Rcpp::NumericMatrix)");
        signatures.insert("void(*rcpp_mineralization)(Rcpp::NumericMatrix,double,double)");
        signatures.insert("void(*rcpp_nutr_input)(Rcpp::NumericMatrix,double)");
        signatures.insert("void(*rcpp_nutr_output)(Rcpp::NumericMatrix,double,double)");
        signatures.insert("double(*rcpp_nutr_uptake)(double,double,double,double,double)");
        signatures.insert("void(*rcpp_seagrass_growth)(Rcpp::NumericMatrix,double,double,double,double,double,double,double,double,double,double,double,double,double,double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _arrR_seagrass_RcppExport_registerCCallable() { 
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_allocation_ratio", (DL_FUNC)_arrR_seagrass_rcpp_allocation_ratio_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_convert_nutr", (DL_FUNC)_arrR_seagrass_rcpp_convert_nutr_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_diffuse_values", (DL_FUNC)_arrR_seagrass_rcpp_diffuse_values_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_get_adjacencies", (DL_FUNC)_arrR_seagrass_rcpp_get_adjacencies_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_get_reef", (DL_FUNC)_arrR_seagrass_rcpp_get_reef_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_mineralization", (DL_FUNC)_arrR_seagrass_rcpp_mineralization_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_nutr_input", (DL_FUNC)_arrR_seagrass_rcpp_nutr_input_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_nutr_output", (DL_FUNC)_arrR_seagrass_rcpp_nutr_output_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_nutr_uptake", (DL_FUNC)_arrR_seagrass_rcpp_nutr_uptake_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_rcpp_seagrass_growth", (DL_FUNC)_arrR_seagrass_rcpp_seagrass_growth_try);
    R_RegisterCCallable("arrR.seagrass", "_arrR_seagrass_RcppExport_validate", (DL_FUNC)_arrR_seagrass_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_arrR_seagrass_rcpp_allocation_ratio", (DL_FUNC) &_arrR_seagrass_rcpp_allocation_ratio, 5},
    {"_arrR_seagrass_rcpp_convert_nutr", (DL_FUNC) &_arrR_seagrass_rcpp_convert_nutr, 2},
    {"_arrR_seagrass_rcpp_diffuse_values", (DL_FUNC) &_arrR_seagrass_rcpp_diffuse_values, 5},
    {"_arrR_seagrass_rcpp_get_adjacencies", (DL_FUNC) &_arrR_seagrass_rcpp_get_adjacencies, 2},
    {"_arrR_seagrass_rcpp_get_reef", (DL_FUNC) &_arrR_seagrass_rcpp_get_reef, 1},
    {"_arrR_seagrass_rcpp_mineralization", (DL_FUNC) &_arrR_seagrass_rcpp_mineralization, 3},
    {"_arrR_seagrass_rcpp_nutr_input", (DL_FUNC) &_arrR_seagrass_rcpp_nutr_input, 2},
    {"_arrR_seagrass_rcpp_nutr_output", (DL_FUNC) &_arrR_seagrass_rcpp_nutr_output, 3},
    {"_arrR_seagrass_rcpp_nutr_uptake", (DL_FUNC) &_arrR_seagrass_rcpp_nutr_uptake, 5},
    {"_arrR_seagrass_rcpp_seagrass_growth", (DL_FUNC) &_arrR_seagrass_rcpp_seagrass_growth, 15},
    {"_arrR_seagrass_RcppExport_registerCCallable", (DL_FUNC) &_arrR_seagrass_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_arrR_seagrass(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
