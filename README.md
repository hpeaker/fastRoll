# fastRoll
Efficient functions for computing rolling statistics.


# Warning
Development of this package is currently mostly for learning purposes.
No promises are made about the robustness of the calculations or the consistency of the package API at this time.

# Installation

```{r}
# install.packages("devtools")
devtools::install_github("hpeaker/fastRoll")
```


# Usage


Functions in this package are written so they can be used naturally in a typical dplyr pipeline

```{r}
library(fastRoll)
library(dplyr)


```


# Other Packages
There are other packages for performing these calculations
- zoo
- roll
- RcppRoll
- RollingWindow
