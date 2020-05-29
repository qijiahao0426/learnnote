package cn.qjh.test;

import java.util.List;
import java.util.Map;

import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

import cn.qjh.bean.Book;
import cn.qjh.bean.Car;
import cn.qjh.bean.Person;

public class IOCTest {
    ApplicationContext ioc = new ClassPathXmlApplicationContext("ioc2.xml");
    ApplicationContext ioc0 = new ClassPathXmlApplicationContext("ioc3.xml");

    @Test
    public void test10() {
        Object bean = ioc0.getBean("myFactoryBeanImple");
        System.out.println(bean.getClass());
    }

    @Test
    public void test09() {
        System.out.println(ioc0.getBean("airplane01"));
        System.out.println("容器启动完成");
    }

    @Test
    public void test08() {

    }

    @Test
    public void test07() {
        Person person06 = (Person) ioc.getBean("person06");
        System.out.println(person06);
    }

    @Test
    public void test06() {
        Person person04 = (Person) ioc.getBean("person04");
        Object car = ioc.getBean("car01");
        System.out.println("容器中的car:" + car);
        System.out.println("person中的car:" + person04.getCar());
    }

    @Test
    public void test05() {
        Person person03 = (Person) ioc.getBean("person03");
        Map<String, Object> maps = person03.getMaps();
        System.out.println(maps);

        Map<String, Object> bean = (Map<String, Object>) ioc.getBean("myMap");
        System.out.println(bean.getClass());
    }

    @Test
    public void test02() {
        Person person01 = (Person) ioc.getBean("person02");

        Car car = person01.getCar();
        System.out.println(car);
        List<Book> books = person01.getBooks();
        System.out.println(books);
        System.out.println("=========================");

        Map<String, Object> maps = person01.getMaps();
        System.out.println(maps);

        System.out.println("=========================");
        System.out.println(person01.getProperties());

    }

    @Test
    public void test() {
        // src是类路径的开始
        ApplicationContext ioc = new ClassPathXmlApplicationContext("ioc.xml");

        Person bean = (Person) ioc.getBean("person01");

        System.out.println(bean);
    }
}
