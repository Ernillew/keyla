//
// ������ TRAY_ICON �������� ������� ���������� � ����, � �������
// ������� � ������������ ���������� ����������
//

namespace trayIcon {

	// ������� ������ � ����
	void create(HWND mainWindow);

	// ���������� ���� ������. ��������� �� ���� ���������� �������� ����
	void showMenu();

	// ���������� ������, ��������������� ��������� layout
	void indicateLayout(HKL layout);

	// ���������� ������ � ����
	void destroy();

	// �������� ����������� ����
	HMENU getMenu();
}