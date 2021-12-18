#pragma once
#include "../User.cpp"
#include "../systemcall.cpp"

#define MAX_WHAT_LANGUAGE_NUMBER 4

static wchar_t what_language_keywords[MAX_WHAT_LANGUAGE_NUMBER][30] = {
  L"what language do you speak",
  L"What language do you speak",
  L"what language do you speak?",
  L"What language do you speak?"
};

struct Com_what_language {
  User* user;

  bool Com_what_language::check(wchar_t *com) {
    for (int i = 0; i < MAX_WHAT_LANGUAGE_NUMBER; i++) {
      if (strcmps(com, what_language_keywords[i]))
        return true;
    }
    return false;
  }

  void Com_what_language::prepare(User* user) {
    this->user = user;
  }

  void Com_what_language::execute() {
      imageview(L"dead_eyes.bgra");
      printfs(L"Who the fuck do you think you are?\n\r");
  }
};
