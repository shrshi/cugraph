/*
 * Copyright (c) 2023, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <cugraph/mtmg/detail/device_shared_wrapper.hpp>
#include <raft/core/device_span.hpp>

namespace cugraph {
namespace mtmg {
namespace detail {

/**
 * @brief  Wrap an object to be available for each GPU
 *
 * In the MTMG environment we need the ability to manage a collection of objects
 * that are associated with a particular GPU, and fetch the objects from an
 * arbitrary GPU thread.  This object will wrap any object and allow it to be
 * accessed from different threads.
 */
template <typename T>
using device_shared_device_span_t = device_shared_wrapper_t<raft::device_span<T>>;

}  // namespace detail
}  // namespace mtmg
}  // namespace cugraph
