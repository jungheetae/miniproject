#pragma once
#ifndef STUDENT__DB_H
#define STUDENT__DB_H

typedef struct STUDENT_DB {
	int snum; //학번
	char name[10]; //이름
	char dept[20]; //학과
	int yaer; //학년
	int mid; //중간
	int fin; //기말
	char grade; //성적
}SDB;

#endif STUDENT__DB_H
