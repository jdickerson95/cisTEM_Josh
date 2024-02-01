#ifndef _SRC_GPU_DEVICEMANAGER_H_
#define _SRC_GPU_DEVICEMANAGER_H_

class DeviceManager {

  public:
    int  nGPUs;
    int  gpuIDX;
    bool is_manager_initialized = false;

    DeviceManager( );
    DeviceManager(int wanted_number_of_gpus, int wanted_gpu_id);
    virtual ~DeviceManager( );

    void Init(int wanted_number_of_gpus, int wanted_gpu_id);
    void SetGpu(int cpu_thread_idx);
    void ResetGpu( );
    void ListDevices( );

  private:
};

#endif // _SRC_GPU_DEVICEMANAGER_H_
