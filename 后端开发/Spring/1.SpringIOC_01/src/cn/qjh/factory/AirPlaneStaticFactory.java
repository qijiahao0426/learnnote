package cn.qjh.factory;

import cn.qjh.bean.AirPlane;

public class AirPlaneStaticFactory {

    public static AirPlane getAirPlane(String jzName) {
        System.out.println("AirPlaneStaticFactory正在造飞机");
        AirPlane airPlane = new AirPlane();
        airPlane.setJzName(jzName);
        return airPlane;
    }
}
