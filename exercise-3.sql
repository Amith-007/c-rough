create database UNIVERSITY;
use UNIVERSITY;

create table STUDENT(
stud_name varchar(40),
stud_number int primary key ,
class int ,
major varchar(10));

create table COURSES(
course_name varchar(50),
course_number varchar(20) primary key,
credit_hours int,
department varchar(10));

create table SECTION(
section_identifier int,
course_number varchar(20),
semester varchar(10),
course_year int,
instructor varchar(20),
foreign key(course_number) references COURSES(course_number));

create table GRADE_REPORT(
stud_number int ,
section_identifier int ,
grade char,
foreign key(stud_number) references STUDENT(stud_number));

create table PREREQUISITE(
course_number varchar(20),
prerequisite_number varchar(20),
foreign key(course_number) references COURSES(course_number));

insert into STUDENT(stud_name,stud_number,class,major) values("Smith",17,1,"CS");
insert into STUDENT(stud_name,stud_number,class,major) values("Brown",8,2,"CS");

insert into COURSES(course_name,course_number,credit_hours,department) values("Intro to Computer Science","CS1310",4,"CS");
insert into COURSES(course_name,course_number,credit_hours,department) values("Data Structures","CS3320",4,"CS");
insert into COURSES(course_name,course_number,credit_hours,department) values("Discrete Mathematics","MATH2410",3,"MATH");
insert into COURSES(course_name,course_number,credit_hours,department) values("Database","CS3380",3,"CS");

insert into SECTION(section_identifier,course_number,semester,course_year,instructor) values(85,"MATH2410","Fall",07,"King");
insert into SECTION(section_identifier,course_number,semester,course_year,instructor) values(92,"CS1310","Fall",07,"Anderson");
insert into SECTION(section_identifier,course_number,semester,course_year,instructor) values(102,"CS3320","Spring",08,"Knuth");
insert into SECTION(section_identifier,course_number,semester,course_year,instructor) values(112,"MATH2410","Fall",08,"Chang");
insert into SECTION(section_identifier,course_number,semester,course_year,instructor) values(119,"CS1310","Fall",08,"Anderson");
insert into SECTION(section_identifier,course_number,semester,course_year,instructor) values(135,"CS3380","Fall",08,"Stone");

insert into GRADE_REPORT(stud_number,section_identifier,grade) values(17,112,"B");
insert into GRADE_REPORT(stud_number,section_identifier,grade) values(17,119,"C");
insert into GRADE_REPORT(stud_number,section_identifier,grade) values(8,85,"A");
insert into GRADE_REPORT(stud_number,section_identifier,grade) values(8,92,"A");
insert into GRADE_REPORT(stud_number,section_identifier,grade) values(8,102,"B");
insert into GRADE_REPORT(stud_number,section_identifier,grade) values(8,135,"A");

insert into PREREQUISITE(course_number,prerequisite_number) values("CS3380","CS3320");
insert into PREREQUISITE(course_number,prerequisite_number) values("CS3380","MATH2410");
insert into PREREQUISITE(course_number,prerequisite_number) values("CS3320","CS1310");

select COURSES.course_name,GRADE_REPORT.grade from STUDENT join   ;






 