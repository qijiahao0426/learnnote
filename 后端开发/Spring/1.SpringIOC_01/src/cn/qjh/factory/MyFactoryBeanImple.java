package cn.qjh.factory;

import java.util.UUID;

import org.springframework.beans.factory.FactoryBean;

import cn.qjh.bean.Book;

public class MyFactoryBeanImple implements FactoryBean<Book> {

    @Override
    public Book getObject() throws Exception {
        // TODO Auto-generated method stub
        System.out.println("MyFactoryBeanImple帮你创建对象");
        Book book = new Book();
        book.setBookName(UUID.randomUUID().toString());
        return book;
    }

    @Override
    public Class<?> getObjectType() {
        // TODO Auto-generated method stub
        return Book.class;
    }

    @Override
    public boolean isSingleton() {
        // TODO Auto-generated method stub
        return false;
    }

}
