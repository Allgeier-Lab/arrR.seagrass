% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{rcpp_allocation_ratio}
\alias{rcpp_allocation_ratio}
\title{rcpp_allocation_ratio}
\usage{
rcpp_allocation_ratio(biomass, biomass_min, biomass_max, threshold, slope)
}
\arguments{
\item{biomass}{Numeric with biomass.}

\item{biomass_min, biomass_max}{Numeric with minum and maximum of biomass.}

\item{threshold, slope}{Numeric with function parameters.}
}
\value{
double
}
\description{
Rcpp allocation ratio.
}
\details{
Get ratio of bg and ag nutrient allocation. If ratio=1, all nutrients are
allocated in the bg biomass.

If the threshold is positive, the ratio is r=1 for all biomass values below
the threshold. If threshold is negative, the ratio is be r=0.5 at the threshold.
}
\references{
User wmsmith on CrossValidated: "Is there a formula for an s-shaped curve with
domain and range [0,1]?" <https://stats.stackexchange.com/questions/214877/>
}
