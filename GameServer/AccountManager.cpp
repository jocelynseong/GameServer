#include "pch.h"
#include "AccountManager.h"
#include "UserManager.h"

void AccountManager::ProcessLogin()
{
	//accountLock
	lock_guard<mutex> guard();

	//userLock
	UserManager::Instance()->GetUser(100);

	//TODO
}