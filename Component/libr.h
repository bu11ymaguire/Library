#ifndef LIB_H
#define LIB_H
void menu(int* n,char user[]); //메인 메뉴
void regist(); //회원가입
void pw(char pw[]); //패스워드 생성
void login(char usr[]); //로그인 
void find_id(char id[]); //
void bckup(char ID[],char p[]); //패스워드 백업
void find_p(char iD[]); //비밀번호 찾기
void log_menu(int* n, char user[]); //로그인 후 메뉴
void not_robot(); //로봇이 아닙니다
void star(char star[]);  //패스워드 입력
void p_change(char usar[]); //비밀번호 바꾸기
void admn(int* n); //관리자 메뉴
void id_rule(char Ld[], int* db);  //ID 규칙; Admin이라는 단어 포함 X
void p_star(char pstar[]); //암호화 된 입력
void p_cpy(char p[]); //string 암호화
void borrow_menu(char usr[]); //책 대여 창구
void borrow_book(char p_id[], char f1le[]);//책 대여
void return_book(char f1le[]);//책 반납
void index_book(); //책 찾기
int check_book(char f11e[]); //사용자가 책을 몇권 대여했는지 확인.
void b_book(char bok[], char fle[]); //사용자 데이터파일에 책 txt 입력
void user_book(char usr[]);
#endif
