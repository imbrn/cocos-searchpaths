#ifndef SEARCHPATHS_BASE_PATH_H
#define SEARCHPATHS_BASE_PATH_H

#include "search_path.h"

namespace searchpaths {

///
/// BasePath class.
///
class BasePath: public SearchPath {
public:
  virtual ~BasePath() {}
  virtual std::vector<std::string> paths() const override;
};

}

#endif
