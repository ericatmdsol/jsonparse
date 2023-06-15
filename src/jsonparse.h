#ifndef R_JSONPARSE_H
#define R_JSONPARSE_H

#include <Rcpp.h>

// [[Rcpp::depends(rapidjsonr)]]
#include "rapidjson/document.h"

using namespace Rcpp;


#define R_NA_STR LogicalVector(NA_LOGICAL);

List parse_value(const rapidjson::Value& val);

namespace js_vars {
  extern std::unordered_set<int> dtypes;
}

#endif
