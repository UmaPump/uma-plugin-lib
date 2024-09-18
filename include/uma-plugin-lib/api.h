#pragma once

#ifdef __cplusplus
extern "C" {
#endif

struct UmaPluginLibAPI {
    const char* (*get_package_runtime_dir)();
    const char* (*get_package_assets_dir)();
    void (*log)(int level, const char* msg);
};

#ifdef __cplusplus
}
#endif
