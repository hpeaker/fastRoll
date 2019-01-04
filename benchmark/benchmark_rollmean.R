
# To benchmark
library(microbenchmark)
library(rbenchmark)

# New package
library(fastRoll)

# Other packages with rolling stats
library(zoo)
library(RcppRoll)
library(roll)
library(RollingWindow)

x <- 1:1000
y <- rnorm(1000)


microbenchmark(
  frollmean(x, 100),
  zoo::rollmean(x, 100),
  RcppRoll::roll_mean(x, 100),
  roll::roll_mean(matrix(x, ncol = 1), 100),
  RollingWindow::RollingMean(x, 100)
)

microbenchmark(
  frollmean(y, 100, fill = NA),
  zoo::rollmean(y, 100, fill = NA),
  RcppRoll::roll_mean(y, 100),
  roll::roll_mean(matrix(y, ncol = 1), 100),
  RollingWindow::RollingMean(y, 100)
)





