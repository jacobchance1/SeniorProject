# 1 "pool.cc"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 396 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Appl/Xilinx/Vitis_HLS/2023.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 108 "C:/Appl/Xilinx/Vitis_HLS/2023.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_ReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Read(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_WriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Write(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_CanReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbWriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_CanWriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_PrintNone(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_PrintInt(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_PrintDouble(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_Return(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow)) __attribute__((overloadable));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_Unroll(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_Inline(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecBindPort(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_DataPack(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void __xilinx_ip_top(...) __attribute__ ((nothrow)) __attribute__((overloadable));


}
# 2 "<built-in>" 2
# 1 "pool.cc" 2
# 1 "./pool.h" 1

# 1 "./../Headers/definitions.h" 1
# 52 "./../Headers/definitions.h"
typedef float raw[28][28];
typedef float pad[(28 + (5 - 1))][(28 + (5 - 1))];
typedef float conv1[28][28][20];
typedef float pool1[(28 / 2)][(28 / 2)][20];
typedef float conv2[10][10][50];
typedef float pool2[(10 / 2)][(10 / 2)][50];
typedef float flat[(50 * (10 / 2) * (10 / 2))];
# 3 "./pool.h" 2
# 1 "C:/Appl/Xilinx/Vitis_HLS/2023.1/common/technology/autopilot\\hls_streamofblocks.h" 1
# 26 "C:/Appl/Xilinx/Vitis_HLS/2023.1/common/technology/autopilot\\hls_streamofblocks.h"
namespace hls {
template <typename __STREAM_T__>
class stream_buf {
  __STREAM_T__ data __attribute__((no_ctor));

 public:
  inline __attribute__((always_inline)) __attribute__((nodebug)) stream_buf(int depth) {
    __fpga_set_stream_of_blocks_depth(&data, depth);
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) __STREAM_T__& read_acquire() {
    __fpga_pipo_pop_acquire(&data);
    return data;
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) void read_release() {
    __fpga_pipo_pop_release(&data);
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) __STREAM_T__& write_acquire() {
    __fpga_pipo_push_acquire(&data);
    return data;
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) void write_release() {
    __fpga_pipo_push_release(&data);
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) bool empty() const {

    return !__fpga_pipo_not_empty(&data);
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) bool full() const {

    return !__fpga_pipo_not_full(&data);
  }
# 71 "C:/Appl/Xilinx/Vitis_HLS/2023.1/common/technology/autopilot\\hls_streamofblocks.h"
  template <typename>
  friend class read_lock;
  template <typename>
  friend class write_lock;
};

template<typename __STREAM_T__, int DEPTH=2>
class stream_of_blocks;
# 142 "C:/Appl/Xilinx/Vitis_HLS/2023.1/common/technology/autopilot\\hls_streamofblocks.h"
template <typename __STREAM_T__>
class read_lock {
  stream_of_blocks<__STREAM_T__>& res;
  __STREAM_T__& buf;

 public:
  inline __attribute__((always_inline)) __attribute__((nodebug)) read_lock(stream_of_blocks<__STREAM_T__>& s) : res(s), buf(res.read_acquire()) { }

  inline __attribute__((always_inline)) __attribute__((nodebug)) ~read_lock() { res.read_release(); }

  inline __attribute__((always_inline)) __attribute__((nodebug)) operator __STREAM_T__&() { return buf; }

  inline __attribute__((always_inline)) __attribute__((nodebug)) __STREAM_T__& operator=(const __STREAM_T__& val) { return buf = val; }
};

template <typename __STREAM_T__>
class write_lock {
  stream_of_blocks<__STREAM_T__>& res;
  __STREAM_T__& buf;

 public:
  inline __attribute__((always_inline)) __attribute__((nodebug)) write_lock(stream_of_blocks<__STREAM_T__>& s) : res(s), buf(res.write_acquire()) { }

  inline __attribute__((always_inline)) __attribute__((nodebug)) ~write_lock() { res.write_release(); }

  inline __attribute__((always_inline)) __attribute__((nodebug)) operator __STREAM_T__&() { return buf; }

  inline __attribute__((always_inline)) __attribute__((nodebug)) __STREAM_T__& operator=(const __STREAM_T__& val) { return buf = val; }
};

template <typename __STREAM_T__>
class stream_of_blocks<__STREAM_T__, 2> {




  friend class read_lock<__STREAM_T__>;
  friend class write_lock<__STREAM_T__>;

  stream_buf<__STREAM_T__> buf;

 public:
  inline __attribute__((always_inline)) __attribute__((nodebug)) stream_of_blocks(int depth=2, __attribute__((unused)) char *name=0): buf(depth) { }

  inline __attribute__((always_inline)) __attribute__((nodebug)) bool full() { return buf.full(); }

  inline __attribute__((always_inline)) __attribute__((nodebug)) bool empty() { return buf.empty(); }

 private:
  inline __attribute__((always_inline)) __attribute__((nodebug)) __STREAM_T__& read_acquire() { return buf.read_acquire(); }

  inline __attribute__((always_inline)) __attribute__((nodebug)) void read_release() { buf.read_release(); }

  inline __attribute__((always_inline)) __attribute__((nodebug)) __STREAM_T__& write_acquire() { return buf.write_acquire(); }

  inline __attribute__((always_inline)) __attribute__((nodebug)) void write_release() { buf.write_release(); }



};

template <typename __STREAM_T__, int DEPTH>
class stream_of_blocks: public stream_of_blocks<__STREAM_T__, 2> {




  friend class read_lock<__STREAM_T__>;
  friend class write_lock<__STREAM_T__>;

 public:
  inline __attribute__((always_inline)) __attribute__((nodebug)) stream_of_blocks(): stream_of_blocks<__STREAM_T__, 2>(DEPTH) {}
};

}
# 4 "./pool.h" 2
void max_pool1_layer(hls::stream_of_blocks<conv1> &in_features,
                    hls::stream_of_blocks<pool1> &out_features);


void max_pool2_layer(hls::stream_of_blocks<conv2> &in_features,
                    hls::stream_of_blocks<pool2> &out_features);
# 2 "pool.cc" 2



void max_pool1_layer(hls::stream_of_blocks<conv1> &in_features,
                    hls::stream_of_blocks<pool1> &out_features)
{

 hls::read_lock<conv1> in_lock(in_features);
 hls::write_lock<pool1> pool_lock(out_features);

        loop_over_maps: for (int f=0;f<20;++f){
#pragma HLS UNROLL factor=10
 loop_over_rows: for (int r =0;r<28;r+=2){
#pragma HLS PIPELINE
 loop_over_columns: for (int c=0;c<28;c+=2){
#pragma HLS PIPELINE
 float max = in_lock[r][c][f];
                   loop_over_pr: for (int pr=0;pr<2;++pr){
                        loop_over_pc: for (int pc=0;pc<2;++pc){
#pragma HLS PIPELINE
 if (in_lock[r+pr][c+pc][f] > max){
                                max = in_lock[r+pr][c+pc][f];
                            }
                        }
                    }
                pool_lock[r/2][c/2][f] = max;
                }

            }

        }


}

void max_pool2_layer(hls::stream_of_blocks<conv2> &in_features,
                    hls::stream_of_blocks<pool2> &out_features)
{


 hls::read_lock<conv2> in_lock(in_features);
 hls::write_lock<pool2> pool_lock(out_features);

        loop_over_map: for (int f=0;f<50;++f){
#pragma HLS UNROLL factor=10
 loop_over_rows: for (int r =0;r<10;r+=2){

                loop_over_col: for (int c=0;c<10;c+=2){
#pragma HLS PIPELINE
 float max = in_lock[r][c][f];
                    loop_over_pr: for (int pr=0;pr<2;++pr){
                       loop_over_pc: for (int pc=0;pc<2;++pc){
                            if (in_lock[r+pr][c+pc][f] > max){
                                max = in_lock[r+pr][c+pc][f];
                            }
                        }
                    }
                    pool_lock[r/2][c/2][f] = max;
                }

            }

        }




}
