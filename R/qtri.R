# Quantile Function

#' @include Triangular.R
#' @rdname Triangular
#' @export
qtri <- function(p, min = 0, max = 1, mode = 0.5, lower_tail = TRUE,
                    log_p = FALSE) {
  if (is.null(p) || is.null(min) || is.null(max) || is.null(mode)) {
    stop("\nArguments p, min, max, and mode must have non-NULL values.")
  }

  if (!is.numeric(p) || !is.numeric(min) || !is.numeric(max) ||
      !is.numeric(mode)) {
    stop("\nArguments p, min, max, and mode must have numeric values.")
  }

  if (!is.logical(lower_tail) || length(lower_tail) > 1L || !is.logical(log_p)
      || length(log_p) > 1L) {
    stop(paste0("\nArguments lower_tail and log_p must have a single logical ",
                "value each."))
  }

  p_size <- length(p)

  tryCatch({
    params <- vctrs::vec_recycle_common(min, max, mode, .size = p_size)
  }, error = function(c) {
    stop(paste0("\nArguments min, max, and mode must be values of length ",
                "equal to length of p or one. \nOnly values of length one are ",
                "recycled."))
  })

  if (p_size == 1L) {
    QTriC(p, min, max, mode, lower_tail, log_p)
  } else {
    QTriC2(p, params[[1]], params[[2]], params[[3]], lower_tail, log_p)
  }
}