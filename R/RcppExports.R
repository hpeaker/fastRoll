# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

c2_cpp <- function(x, y) {
    .Call(`_fastRoll_c2_cpp`, x, y)
}

rollcor_cpp <- function(x, y, k) {
    .Call(`_fastRoll_rollcor_cpp`, x, y, k)
}

rollcov_cpp <- function(x, y, k) {
    .Call(`_fastRoll_rollcov_cpp`, x, y, k)
}

rollmax_cpp <- function(x, k) {
    .Call(`_fastRoll_rollmax_cpp`, x, k)
}

rollmean_cpp <- function(x, k) {
    .Call(`_fastRoll_rollmean_cpp`, x, k)
}

rollsum_cpp <- function(x, k) {
    .Call(`_fastRoll_rollsum_cpp`, x, k)
}

rollmin_cpp <- function(x, k) {
    .Call(`_fastRoll_rollmin_cpp`, x, k)
}

rollsum3_cpp <- function(x, k) {
    .Call(`_fastRoll_rollsum3_cpp`, x, k)
}

rollmean2_cpp <- function(x, k) {
    .Call(`_fastRoll_rollmean2_cpp`, x, k)
}

rollsum2_cpp <- function(x, k) {
    .Call(`_fastRoll_rollsum2_cpp`, x, k)
}

rollvar_cpp <- function(x, k) {
    .Call(`_fastRoll_rollvar_cpp`, x, k)
}

rollsd_cpp <- function(x, k) {
    .Call(`_fastRoll_rollsd_cpp`, x, k)
}

value_pad_cpp <- function(x, front, back, value) {
    .Call(`_fastRoll_value_pad_cpp`, x, front, back, value)
}

# Register entry points for exported C++ functions
methods::setLoadAction(function(ns) {
    .Call('_fastRoll_RcppExport_registerCCallable', PACKAGE = 'fastRoll')
})
