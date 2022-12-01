#include "pch.h"
#include "UserManager.h"
#include "AccountManager.h"

void UserManager::ProcessSave()
{
	lock_guard<mutex> guard();

	Account* account = AccountManager::Instance()->GetAccount(100);
	
	//TODO
};