#ifndef PLAYAPP_H
#define PLAYAPP_H

#include "MooseApp.h"

class PlayApp;

template<>
InputParameters validParams<PlayApp>();

class PlayApp : public MooseApp
{
public:
  PlayApp(InputParameters parameters);
  virtual ~PlayApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* PLAYAPP_H */
