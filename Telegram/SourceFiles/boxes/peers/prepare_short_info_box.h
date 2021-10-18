/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/object_ptr.h"

class PeerData;

namespace Ui {
class BoxContent;
} // namespace Ui

namespace Window {
class SessionNavigation;
} // namespace Window

[[nodiscard]] object_ptr<Ui::BoxContent> PrepareShortInfoBox(
	not_null<PeerData*> peer,
	Fn<void()> open);

[[nodiscard]] object_ptr<Ui::BoxContent> PrepareShortInfoBox(
	not_null<PeerData*> peer,
	not_null<Window::SessionNavigation*> navigation);
