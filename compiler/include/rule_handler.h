#ifndef _RULE_HANDLERS_H_
#define _RULE_HANDLERS_H_

#include "structs.h"
#include "symtable.h"

void libFunc(SymTable_T, char*);
Expr* HANDLE_LVALUE_TO_IDENT(char*, int);
Expr* HANDLE_LVALUE_TO_LOCAL_IDENT(char*, int);
Expr* HANDLE_LVALUE_TO_GLOBAL_IDENT(char*, int);
Expr* HANDLE_TERM_TO_INC_LVALUE(Expr*, int);
Expr* HANDLE_TERM_TO_LVALUE_INC(Expr*, int);
Expr* HANDLE_TERM_TO_DEC_LVALUE(Expr*, int);
Expr* HANDLE_TERM_TO_LVALUE_DEC(Expr*, int);
Expr* HANDLE_PRIM_TO_LVALUE(Expr*, int);
SymbolTableEntry* HANDLE_FUNCPREFIX(char*, int);
SymbolTableEntry* HANDLE_FUNCDEF(SymbolTableEntry*, unsigned, int);
char* HANDLE_IDLIST_IDENT(char*, int);
char* HANDLE_FUNCTION_WITH_NAME(char*, int);
char* HANDLE_FUNCTION_WITHOUT_NAME(int);
Expr* HANDLE_ASSIGNEXPR_TO_LVALUE_ASSIGN_EXPRESSION(Expr*, Expr*, int);
Expr* HANDLE_MEMBER_TO_LVALUE_DOT_IDENT(Expr*, char*, int);
Expr* HANDLE_MEMBER_TO_LVALUE_SQUARE_EXPR(Expr*, Expr*, int);
Call* HANDLE_METHODCALL(char*, Expr*);
Expr* HANDLE_CALL_ELIST(Expr*, Expr*, int);
Expr* HANDLE_CALL_FUNCDEF_ELIST(SymbolTableEntry*, Expr*, int);
Expr* HANDLE_CALL_LVALUE_SUFFIX(Expr*, Call*, int);
Call* HANDLE_NORMCALL(Expr*);
Expr* HANDLE_OBJECTDEF_TO_ELIST(Expr*, int);
Expr* HANDLE_OBJECTDEF_TO_INDEXED(Expr*, int);
Expr* HANDLE_INDEXELEM(Expr*, Expr*);
Expr* HANDLE_PRIM_TO_FUNCDEF(SymbolTableEntry*);
Expr* HANDLE_TERM_TO_UMINUS_EXPR(Expr*, int);
Expr* HANDLE_TERM_TO_NOT_EXPR(Expr*, int);
Expr* HANDLE_ELIST_ADD(Expr*, Expr*);
Expr* HANDLE_INDEXED_ADD(Expr*, Expr*);
Expr* HANDLE_ARITH_OP(iopcode, Expr*, Expr*, int);
Expr* HANDLE_REL_OP(iopcode, Expr*, Expr*, int);
Expr* HANDLE_BOOL_OP(iopcode, Expr*, Expr*, unsigned, int);
unsigned HANDLE_IFPREFIX(Expr*, int);
unsigned HANDLE_ELSEPREFIX(int);
unsigned HANDLE_WHILEARGS(Expr*, int);
void HANDLE_WHILE(unsigned, unsigned, stmt_t*, int);
ForLoopPrefix* HANDLE_FORPREFIX(unsigned, Expr*, int);
void HANDLE_FORSTMT(ForLoopPrefix*, unsigned, unsigned, unsigned, stmt_t*);
stmt_t* HANDLE_BREAK(int);
stmt_t* HANDLE_CONTINUE(int);

#endif  // _RULE_HANDLERS_H_
