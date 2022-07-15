#include <ATen/native/vulkan/ops/Common.h>

namespace at {
namespace native {
namespace vulkan {
namespace ops {

Tensor quantize_per_tensor(
    const at::Tensor& input_arg,
    const double scale,
    const int64_t zero_point,
    const c10::ScalarType dtype);

} // namespace ops
} // namespace vulkan
} // namespace native
} // namespace at