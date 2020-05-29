package cn.qjh.factory;

import cn.qjh.bean.AirPlane;

public class AirPlaneInstanceFactory {
    public AirPlane getAirPlane(String jzName) {
        System.out.println("AirPlaneInstanceFactory正在造飞机");
        AirPlane airPlane = new AirPlane();
        airPlane.setJzName(jzName);
        return airPlane;
    }
}
