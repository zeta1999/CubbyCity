// Copyright (c) 2019 Chris Ohk, Paul Kweon, Den So, Edward Sung

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef CUBBYCITY_IDOWNLOADER_HPP
#define CUBBYCITY_IDOWNLOADER_HPP

#include <string>

namespace CubbyCity
{
class IDownloader
{
 public:
    virtual ~IDownloader() = default;

    virtual bool DownloadData(std::string& out, const std::string& url) = 0;
};
}  // namespace CubbyCity

#endif  // CUBBYCITY_IDOWNLOADER_HPP