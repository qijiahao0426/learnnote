import pymysql
db = pymysql.connect("localhost","testuser","test123","TESTDB" )
cursor=db.cursor()
cursor.execute("select *")
data=cursor.fetchone()
cursor.fetchall()

for x in range(1000):
    cursor.execute("insert into qg_course(NAME,'desc',display-idx) VALUES('测试课程{x+1}','测试课程',6)")

db.commit();
db.close();