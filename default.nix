{ sources ? import ./nix/sources.nix }:
with import sources.nixpkgs { };

stdenv.mkDerivation {
  pname = "monitor-dimensions-calculator";
  version = "0.1.0";

  src = ./.;

  nativeBuildInputs = [ meson ninja pkg-config ];
  buildInputs = [ fmt ];
}
