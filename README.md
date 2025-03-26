# slock - The simple, suckless screen locker

My personal slock configuration.

## Wow, did I write all that myself?

Of course not! This project is based on patches from the suckless community 
which can be found at [suckless.org](https://tools.suckless.org/slock/patches/). 
I modified some of these patches to better suit my needs.

### Patches

| url | description |
| --- | --- |
| [slock-pam_auth](https://tools.suckless.org/slock/patches/pam_auth/slock-pam_auth-20190207-35633d4.diff) | Use PAM for authentication |
| [slock-xresources](https://tools.suckless.org/slock/patches/xresources/slock-xresources-20191126-53e56c7.diff) | Load configuration values from `.Xresources` |

## Installation

```sh
git clone git@github.com:reyniersbram/slock.git
cd slock
sudo make install
```

## Updating to the latest version of slock

Set up the local git configuration to have the official slock repository as
a remote called upstream.

```sh
patch -p0 < gitconfig.diff
```

Then just run `git pull` to get the latest changes.

> [!NOTE]
> There is absolutely no guarantee no conflicts will come up.
