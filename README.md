# JACK command-line tools (LADI project modifications)

This repository has the LADI project variants of JACK tools and other example clients,
which are tracked by jackaudio as
[jackaudio/jack-example-tools](https://github.com/jackaudio/jack-example-tools),
[jackaudio/example-clients](https://github.com/jackaudio/example-clients) and 
[jackaudio/tools](https://github.com/jackaudio/tools) in the past.

## Dependencies

List of required and optional dependencies:

* [alsa-lib](https://www.alsa-project.org/wiki/Main_Page) (required when
  building `alsa_in` and `alsa_out` or ZALSA internal clients)
* [LADI/jack1](https://github.com/LADI/jack1) >= 1.23.0,
  [LADI/jack2](https://github.com/LADI/jack2) >= 2.23.0
  Other versions may work but are not supported in LADI project are
  [jackaudio/jack2](https://github.com/jackaudio/jack2) >= 1.9.20, and
  [pipewire-jack](https://gitlab.freedesktop.org/pipewire/pipewire) >= 0.3.44
* [opus](https://www.opus-codec.org/) (optional buildtime/ runtime dependency
  for `jack_netsource`)
* [readline](https://tiswww.case.edu/php/chet/readline/rltop.html) (optional
  buildtime/ runtime dependency for `jack_transport`)
* [libsamplerate](https://libsndfile.github.io/libsamplerate/) (required when
  building `alsa_in` and `alsa_out` or `jack_netsource`)
* [libsndfile](https://libsndfile.github.io/libsndfile/) (required when
  building `jack_rec`)
* [libzita-alsa-pcmi](https://kokkinizita.linuxaudio.org/linuxaudio/) (required
  when building ZALSA internal clients)
* [libzita-resampler](https://kokkinizita.linuxaudio.org/linuxaudio/) (required
  when building ZALSA internal clients)

For all available options please refer to
[meson_options.txt](meson_options.txt) or run `meson configure` in the project
directory.

## Building

jack-example-tools uses the [meson build system](https://mesonbuild.com).

To configure the project, meson's [universal
options](https://mesonbuild.com/Builtin-options.html#universal-options) (e.g.
**--prefix**) can be used to prepare a build directory:

```bash
meson --prefix=/usr build
```

To build the applications and libraries [ninja](https://ninja-build.org/) is
required:

```bash
ninja -C build
```

## Installing

Meson is able to install the project components to the system directories (when
run as root), while honoring the **DESTDIR** environment variable:

```bash
DESTDIR="/some/other/location" meson install -C build
```

## Internet Relay Chat

For LADI specific issues, submit issues or pull request to LADI project.
For related discussions, you are invited to join
link:https://libera.chat/[Libera.Chat] channel #ladi

IMPORTANT: Do not submit LADI specific issues to jackaudio project.
