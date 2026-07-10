> ⚠️ **AI-assisted project.** Much of the v2 code, documentation, and tooling in
> this repository is written with an AI agent. It targets the author's setup and
> has not been independently audited. Read it before you run it.

# Ashuramaru Bundle

A customizable [Rainmeter](https://www.rainmeter.net/) skin suite: a set of
widgets (clock, system monitor, media, and more) wired to a single control
panel so you can restyle and configure everything without touching a text file.

> 🚧 **v2 is a ground-up rewrite, in active development.** The last released
> build (v1) is preserved on the `v1-legacy` branch and the `v1-final` tag.

## How it works

- A central **theme** (`@Resources/theme/tokens.inc`) is the single source of
  style — colors, fonts, spacing, corners, glass. Change it once and the whole
  suite restyles.
- Skins are **self-describing**: each ships a manifest declaring its options.
  The panel reads a registry of active skins and builds their config pages from
  those manifests. Adding a skin is a registry line plus a manifest — no core
  edits.

## Requirements

- Windows 10/11
- [Rainmeter](https://www.rainmeter.net/) installed
- Some skins (system monitor) use the
  [NativeHardwareMonitor](https://github.com/Kurou-kun/NativeHardwareMonitor)
  Rainmeter plugin — installed separately, not bundled here.

## What ships here

Pure Rainmeter content only — `.ini`, `.inc`, `.lua`, fonts, images, sounds.
No bundled executables, installers, or Windows scripts.

## License

**CC BY-NC-SA 4.0** — see [`LICENSE`](LICENSE).
