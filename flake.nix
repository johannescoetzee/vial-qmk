{
  description = "A Rusty shell";

  inputs.nixpkgs.url = "nixpkgs/nixos-unstable";
  inputs.devshell.url = "github:numtide/devshell";
  inputs.flake-utils.url = "github:numtide/flake-utils";

  outputs = { self, flake-utils, nixpkgs, devshell }: 
    flake-utils.lib.eachDefaultSystem (system: {
      devShell =
        let
          pkgs = import nixpkgs {
            inherit system;

            overlays = [ 
              devshell.overlays.default 
            ];
          };
        in
        pkgs.devshell.mkShell {
          packages = with pkgs; [
            qmk
            gcc-arm-embedded
          ];
        };
    });
}
