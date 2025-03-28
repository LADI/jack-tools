/* SPDX-FileCopyrightText: Nedko Arnaudov
 * SPDX-License-Identifier: GPL-2.0-or-later OR MIT
 */

#include <stdio.h>
#include <jack/jack.h>

int main(/* int argc, char ** argv */)
{
    printf("%s\n", jack_get_version_string());
    return 0;
}
