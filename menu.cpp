#include "interface.h"
#include "cursor.h"
#include "game.h"

Interface::Interface()
{
	PlayImage.loadFromFile("C:/Users/Obsolete-master/start sample.png");
	OptionImage.loadFromFile("C:/Users/Obsolete-master/option sample.png");
	ExitImage.loadFromFile("C:/Users/Obsolete-master/exit sample.png");
	Play.setTexture(&PlayImage);
	Option.setTexture(&OptionImage);
	Exit.setTexture(&ExitImage);
	Play.setPosition(1080.f, 180.f);
	Exit.setPosition(1080.f, 540.f);
	Option.setPosition(1080.f, 360.f);
}

int Interface::Menu()
{
		Cursor mouse;
		mouse.Update();
		if (Play.getGlobalBounds().contains(mouse.Pos.x,mouse.Pos.y))
		{
			return 1; // �̵��� �޴��� ������ ���� ex) 2,3,4......
		}
		if (Option.getGlobalBounds().contains(mouse.Pos.x, mouse.Pos.y))
		{
			return 1; // �̵��� �޴��� ������ ���� ex) 2,3,4......
		}
		if (Exit.getGlobalBounds().contains(mouse.Pos.x, mouse.Pos.y))
		{
			return 0;
		}
		else
		{
			return 1; //�� ���� ������ ������ �ʰ� �ϱ� ����
		}
}