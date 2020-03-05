package cn.qjh.bean;

public class AirPlane {
    private String jzName;

    public String getJzName() {
        return jzName;
    }

    public void setJzName(String jzName) {
        this.jzName = jzName;
    }

    @Override
    public String toString() {
        return "AirPlane [jzName=" + jzName + "]";
    }

}
