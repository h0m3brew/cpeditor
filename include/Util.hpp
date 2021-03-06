/*
 * Copyright (C) 2019-2020 Ashar Khan <ashar786khan@gmail.com>
 *
 * This file is part of cpeditor.
 *
 * cpeditor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * I will not be responsible if cpeditor behaves in unexpected way and
 * causes your ratings to go down and or lose any important contest.
 *
 * Believe Software is "Software" and it isn't immune to bugs.
 *
 */

#ifndef UTIL_HPP
#define UTIL_HPP

#include "Core/MessageLogger.hpp"
#include <QCodeEditor>

namespace Util
{

bool saveFile(const QString &path, const QString &content, const QString &head = "Save File", bool safe = true,
              MessageLogger *log = nullptr);

void applySettingsToEditor(QCodeEditor *editor);

} // namespace Util

#endif // UTIL_HPP
