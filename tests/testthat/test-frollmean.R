context("test-frollmean")


x <- 1:10

test_that("Extreme values of k are handled correctly", {
  n <- length(x)
  expect_equal(x, frollmean(x, 1))
  
  expect_equal(mean(x), frollmean(x, n))
})


test_that("frollmean agrees with zoo::rollmean", {
  values <- rnorm(10)
  
  expect_equal(frollmean(values, 3), zoo::rollmean(values, 3))
})
