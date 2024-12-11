<project xmlns="com.autoesl.autopilot.project" name="SP_CNN" top="cnn" projectType="C/C++">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="-Wl,--stack,0xFFFFFFFF" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="activation.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="activation.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="cnn.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="cnn.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="conv.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="conv.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../Headers/conv_weights.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../Headers/definitions.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="dense.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="dense.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../Headers/dense_weights.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="flatten.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="flatten.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="pool.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="pool.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="utils.cc" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="utils.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../../../Data/in.dat" sc="0" tb="1" cflags="-Wno-unknown-pragmas" csimflags="" blackbox="false"/>
        <file name="../../../Data/in2.dat" sc="0" tb="1" cflags="-Wno-unknown-pragmas" csimflags="" blackbox="false"/>
        <file name="../../main.cc" sc="0" tb="1" cflags="-Wno-unknown-pragmas" csimflags="" blackbox="false"/>
        <file name="../../../Data/out.dat" sc="0" tb="1" cflags="-Wno-unknown-pragmas" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

