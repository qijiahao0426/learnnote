package cn.qjh.bean;

public class Book {
	private String bookName;
	private String suthor;

	public String getBookName() {
		return bookName;
	}

	public void setBookName(String bookName) {
		this.bookName = bookName;
	}

	public String getSuthor() {
		return suthor;
	}

	public void setSuthor(String suthor) {
		this.suthor = suthor;
	}

	@Override
	public String toString() {
		return "Book [bookName=" + bookName + ", suthor=" + suthor + "]";
	}

}
